Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_set_sockets_option("TLS_SNI", "0");


lr_start_transaction("Testhouse_LaunchSite");

		
	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_cookie("ip_address=50.116.88.108; DOMAIN=www.testhouse.net");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.testhouse.net", 
		"URL=https://www.testhouse.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/ast/plugins/cookie-law-info/public/js/cookie-law-info-public.js?ver=1.7.3", ENDITEM, 
		"Url=/ast/plugins/simple-social-buttons/assets/js/front.js?ver=2.0.20", ENDITEM, 
		"Url=/ast/plugins/google-calendar-events/assets/js/default-calendar.min.js?ver=3.1.20", ENDITEM, 
		"Url=/ast/plugins/jetpack/_inc/build/lazy-images/js/lazy-images.min.js?ver=6.9", ENDITEM, 
		"Url=/ast/plugins/google-calendar-events/assets/js/vendor/imagesloaded.pkgd.min.js?ver=3.1.20", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/raleway/v12/1Ptug8zYS_SKggPNyC0ITw.woff2", "Referer=https://fonts.googleapis.com/css?family=Raleway%3A300%2C400%2C500%2C600%2C700%2C800%2C900&ver=20160816", ENDITEM, 
		"Url=/ast/plugins/js_composer/assets/js/dist/js_composer_front.min.js?ver=5.1", ENDITEM, 
		"Url=/wp-includes/js/wp-embed.min.js?ver=5.0.3", ENDITEM, 
		"Url=/ast/themes/testhouse/images/video-img.jpg", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/raleway/v12/1Ptrg8zYS_SKggPNwPIsWqZPAA.woff2", "Referer=https://fonts.googleapis.com/css?family=Raleway%3A300%2C400%2C500%2C600%2C700%2C800%2C900&ver=20160816", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/lato/v14/S6uyw4BMUTPHjx4wXg.woff2", "Referer=https://fonts.googleapis.com/css?family=Lato%3A300%2C400%2C700%2C900&ver=20160816", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/lato/v14/S6u9w4BMUTPHh6UVSwiPGQ.woff2", "Referer=https://fonts.googleapis.com/css?family=Lato%3A300%2C400%2C700%2C900&ver=20160816", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/lato/v14/S6u9w4BMUTPHh7USSwiPGQ.woff2", "Referer=https://fonts.googleapis.com/css?family=Lato%3A300%2C400%2C700%2C900&ver=20160816", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/lato/v14/S6u9w4BMUTPHh50XSwiPGQ.woff2", "Referer=https://fonts.googleapis.com/css?family=Lato%3A300%2C400%2C700%2C900&ver=20160816", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/raleway/v12/1Ptrg8zYS_SKggPNwJYtWqZPAA.woff2", "Referer=https://fonts.googleapis.com/css?family=Raleway%3A300%2C400%2C500%2C600%2C700%2C800%2C900&ver=20160816", ENDITEM, 
		"Url=/ast/themes/testhouse/images/preloader.svg", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/custom.css?ver=20160816", ENDITEM, 
		"Url=https://secure.gravatar.com/dist/css/hovercard.min.css?ver=2019Janaa", ENDITEM, 
		"Url=/ast/themes/testhouse/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/font-awesome.css?ver=20160816", ENDITEM, 
		"Url=https://secure.gravatar.com/dist/css/services.min.css?ver=2019Janaa", ENDITEM, 
		"Url=/wp-includes/js/wp-emoji-release.min.js?ver=5.0.3", ENDITEM, 
		"Url=/ast/themes/testhouse/images/btn-arrow.png", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/styles.css?ver=20160816", ENDITEM, 
		"Url=/ast/themes/testhouse/images/submit-arrow.png", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/styles.css?ver=20160816", ENDITEM, 
		"Url=/ast/themes/testhouse/images/phone-icon.png", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/styles.css?ver=20160816", ENDITEM, 
		"Url=/ast/themes/testhouse/images/location-icon.png", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/styles.css?ver=20160816", ENDITEM, 
		"Url=/ast/themes/testhouse/images/envelop-icon.png", "Referer=https://www.testhouse.net/ast/themes/testhouse/css/styles.css?ver=20160816", ENDITEM, 
		"Url=https://stats.wp.com/e-201903.js", ENDITEM, 
		"Url=/ast/plugins/contact-form-7/images/ajax-loader.gif", "Referer=https://www.testhouse.net/ast/plugins/contact-form-7/includes/css/styles.css?ver=5.1.1", ENDITEM, 
		LAST);


	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_stream_open("ID=1", "URL=https://www.testhouse.net/ast/themes/testhouse/images/bg-video.mp4", "Protocol=HTTP", LAST);

	web_stream_close("ID=1", LAST);

	web_add_header("Origin", 
		"https://www.testhouse.net");

	lr_end_transaction("Testhouse_LaunchSite", LR_AUTO);



	return 0;
}