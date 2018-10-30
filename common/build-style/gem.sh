#
# This helper is for templates using gem files from RubyGems.
#
do_install() {
	: ${gem_cmd:=gem}

	local _GEMDIR _INSTDIR
	
	_GEMDIR=$($gem_cmd env gemdir)
	_INSTDIR=${DESTDIR}/${_GEMDIR}/gems/${pkgname#ruby-}-${version}

	$gem_cmd install \
		--local \
		--install-dir ${DESTDIR}/${_GEMDIR} \
		--bindir ${DESTDIR}/usr/bin \
		--ignore-dependencies \
		--no-document \
		--verbose \
		${XBPS_SRCDISTDIR}/${pkgname}-${version}/${pkgname#ruby-}-${version}.gem

	# Remove cache
	rm -rf ${DESTDIR}/${_GEMDIR}/cache

	# Remove ext directory. they are only source code and configuration
	# The actual extensions are guarded in an arch path
	rm -rf ${_INSTDIR}/ext

	# Remove installed tests and benchmarks
	rm -rf ${_INSTDIR}/{test,tests,autotest,benchmark,benchmarks,script,examples,demo}

	# Remove files shipped on the root of the gem, most of the time they are useless
	find ${_INSTDIR} -maxdepth 1 -type f -delete

	# Remove unnecessary files
	find ${DESTDIR}/${_GEMDIR}/extensions \( -name mkmf.log -o -name gem_make.out \) -delete

	# Place manpages in usr/share/man/man[0-9]
	find ${_INSTDIR}/man -type f -name '*.[0-8n]' | while read -r m; do
		vman ${m}
	done

	rm -rf "${_INSTDIR}/man"

	# Place executables in /usr/bin
	if [ -d "${_INSTDIR}/bin" ]; then
		for f in "${_INSTDIR}"/bin/*; do
			vbin "${f}"
		done
	fi

	rm -rf ${_INSTDIR}/bin

	# Place conf files in their places
	find ${_INSTDIR}/etc -type f | while read -r c; do
		vmkdir $(dirname ${c##*${_INSTDIR}})
		mv ${c} "${DESTDIR}/${c##*${_INSTDIR}}"
	done

	rm -rf ${_INSTDIR}/etc
}
