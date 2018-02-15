import $ from 'jquery';
import mixitup from 'mixitup';
import mixitupMultifilter from './modules/mixitup-multifilter';

mixitup.use(mixitupMultifilter);
var containerEl = document.querySelector('.performance-wizard');
var mixer = mixitup(containerEl, {
    multifilter: {
        enable: true // enable the multifilter extension for the mixer
    },
    controls: {
        toggleDefault: 'all'
    }
});