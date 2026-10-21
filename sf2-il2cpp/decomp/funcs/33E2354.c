// VideoPlayerController$$Destroy @ RVA 0x33E2354

void VideoPlayerController__Destroy(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *obj;
  VideoPlayerController_o *pVVar2;
  
  if ((DAT_04567eac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eac = 1;
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
                    /* try { // try from 034e23bc to 035e23c3 has its CatchHandler @ 034e24d0 */
  pVVar2 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
                    /* try { // try from 034e23c4 to 035e23c7 has its CatchHandler @ 034e24c8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e23c8 to 035e23cf has its CatchHandler @ 034e24d4 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034e23d0 to 035e23d3 has its CatchHandler @ 034e1934 */
                    /* try { // try from 034e23d4 to 035e23d7 has its CatchHandler @ 034e2474 */
                    /* try { // try from 034e23d8 to 035e23df has its CatchHandler @ 034e1934 */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pVVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 034e23e0 to 035e23e3 has its CatchHandler @ 034e24bc */
                    /* try { // try from 034e23e4 to 035e23eb has its CatchHandler @ 034e24b8 */
                    /* try { // try from 034e23ec to 035e23f3 has its CatchHandler @ 034e24b4 */
    return;
  }
                    /* try { // try from 034e23f4 to 035e23f7 has its CatchHandler @ 034e24bc */
  if (DAT_04566bb5 == '\0') {
                    /* try { // try from 034e23f8 to 035e23fb has its CatchHandler @ 034e24b0 */
                    /* try { // try from 034e23fc to 035e23ff has its CatchHandler @ 034e24ac */
                    /* try { // try from 034e2400 to 035e2403 has its CatchHandler @ 034e24b0 */
    FUN_01bab630(&VideoPlayerController_TypeInfo);
                    /* try { // try from 034e2404 to 035e240b has its CatchHandler @ 034e24a8 */
    DAT_04566bb5 = '\x01';
  }
                    /* try { // try from 034e240c to 035e240f has its CatchHandler @ 034e24ac */
                    /* try { // try from 034e2410 to 035e2413 has its CatchHandler @ 034e248c */
                    /* try { // try from 034e2414 to 035e2417 has its CatchHandler @ 034e2488 */
  pVVar2 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
                    /* try { // try from 034e2418 to 035e241b has its CatchHandler @ 034e248c */
  if (pVVar2 != (VideoPlayerController_o *)0x0) {
                    /* try { // try from 034e241c to 035e241f has its CatchHandler @ 034e2488 */
                    /* try { // try from 034e2420 to 035e2427 has its CatchHandler @ 034e2478 */
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pVVar2,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034e2428 to 035e242b has its CatchHandler @ 034e2458 */
                    /* try { // try from 034e242c to 035e242f has its CatchHandler @ 034e243c */
                    /* try { // try from 034e2430 to 035e2433 has its CatchHandler @ 034e2458 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034e21b8 with catch @ 034e2434
                       try { // try from 034e2434 to 035e24fb has its CatchHandler @ 034e1934 */
                    /* catch() { ... } // from try @ 034e223c with catch @ 034e2438 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch() { ... } // from try @ 034e242c with catch @ 034e243c */
                    /* catch() { ... } // from try @ 034e21e0 with catch @ 034e2440 */
                    /* catch() { ... } // from try @ 034e2084 with catch @ 034e2444
                       catch() { ... } // from try @ 034e2148 with catch @ 034e2444 */
                    /* catch() { ... } // from try @ 034e2168 with catch @ 034e2448 */
                    /* catch() { ... } // from try @ 034e2208 with catch @ 034e244c */
                    /* catch() { ... } // from try @ 034e1e68 with catch @ 034e2450
                       catch() { ... } // from try @ 034e2160 with catch @ 034e2450 */
                    /* catch() { ... } // from try @ 034e2018 with catch @ 034e2454
                       catch() { ... } // from try @ 034e2130 with catch @ 034e2454 */
                    /* catch() { ... } // from try @ 034e2428 with catch @ 034e2458
                       catch() { ... } // from try @ 034e2430 with catch @ 034e2458 */
    UnityEngine_Object__Destroy(obj,0.4,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034e1f40 with catch @ 034e245c
                       catch() { ... } // from try @ 034e2100 with catch @ 034e245c */
  FUN_01bab8c8();
}

