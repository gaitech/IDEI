<?php
/**
 * @file
 * blockqueue_idei_capability_statement.default_blockqueues.inc
 */

/**
 * Implements hook_default_blockqueue().
 */
function blockqueue_idei_capability_statement_default_blockqueue() {
  $export = array();

  $blockqueue = new stdClass();
  $blockqueue->disabled = FALSE; /* Edit this to true to make a default blockqueue disabled initially */
  $blockqueue->api_version = 1;
  $blockqueue->name = 'idei_capability_statement';
  $blockqueue->admin_title = 'IDEI capability statement';
  $blockqueue->size = 0;
  $blockqueue->blocks = array(
    0 => 'views|7d07ffffb5ed7220f31ec7c06f647601',
    1 => 'views|d9a9b32cd3d813ecf8224adbe7034eab',
    2 => 'views|63fec33ac596f387dc4ac3b3bc85ebae',
    3 => 'views|248da65b0d8d7155ff47fcb5e557e9b6',
    4 => 'views|306742404e52e93803a83db3600cf863',
    5 => 'views|a652a82088968cd0b7945156af2371f7',
    6 => 'views|5bfb3b53177e6a1499b1f59a11f86ebe',
    7 => 'views|dffe3af4a0980530d0ecfab53d4510ae',
    8 => 'views|f039358468eaf8943db25c51aefbe21c',
    9 => 'views|23d06c92b2c055e61fbb51f8d65a18cb',
    10 => 'views|ac06d117707bf2b0bf10b9df3c38e7b4',
    11 => 'views|idei_capability_banner-block',
    12 => 'views|idei_capability_statement-block',
    13 => 'views|186a2ad753a99447e2aa83e05f2b96c0',
    14 => 'views|d14a2d7544bda1c76401219ee4902007',
    15 => 'views|28ef32d1ca0f6832e8019212a15df43c',
    16 => 'views|awards-block',
    17 => 'views|07a49da96182fc420a20abb6340d74e2',
    18 => 'views|d523ef282655caafeb47ab6839f8d0b1',
    19 => 'views|a7e12ba7072231bfb4d83e6ab16464b2',
    20 => 'views|6303717bb64e9af34ec2c54a5e5e84ff',
    21 => 'views|54a9787b3901cbef1d966db7d1e01e7a',
  );
  $blockqueue->settings = array();
  $export['idei_capability_statement'] = $blockqueue;

  return $export;
}
