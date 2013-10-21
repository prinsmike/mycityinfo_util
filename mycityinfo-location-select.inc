<?php

function generate_domain_select_options($path_postfix = '') {
	$output = '';
	$domains = array();
	$dd = domain_domains();
	foreach ($dd as $d) {
		$domains[$d['sitename']] = $d['path'];
	}
	ksort($domains);

	$output .= '<option value="'.$domains['South Africa'].'/'.$path_postfix.'">All of South Africa</option>';
	foreach ($domains as $sitename => $path) {
		if ($sitename != 'South Africa') {
			$output .= '<option value="'.$path.'">'.$sitename.'</option>';
		}
	}
	return $output;
}
