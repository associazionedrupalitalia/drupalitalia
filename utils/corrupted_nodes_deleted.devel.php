<?php

// the following code was executed using devel php in order to remove some old, corrupted nodes

$nids = array(9224, 6717, 59, 5777, 2833, 476, 522, 519, 520, 487, 480, 475, 474, 55);

foreach ($nids as $nid) {
  node_delete($nid);
}