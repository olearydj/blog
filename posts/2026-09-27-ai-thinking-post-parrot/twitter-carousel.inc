<script>
if (location.protocol === 'file:') document.documentElement.classList.add('local-file-preview');
(() => {
  const root = document.getElementById('discussion-posts');
  if (!root || !window.bootstrap?.Carousel) return;
  new bootstrap.Carousel(root, {interval: false, ride: false, wrap: true, keyboard: true, touch: true});
  root.classList.add('is-ready');
  root.querySelector('.x-carousel-navigation').hidden = false;
  root.addEventListener('slid.bs.carousel', event => {
    root.querySelector('[role="status"]').textContent = `${event.to + 1} / 5`;
    const quote = event.relatedTarget.querySelector('.x-quote');
    if (quote) {
      quote.classList.replace('x-quote', 'twitter-tweet');
      window.twttr?.widgets?.load(event.relatedTarget);
    }
  });
})();
</script>
<script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>
