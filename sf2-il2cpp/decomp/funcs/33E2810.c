// VideoPlayerController$$KNKHDOFPBOG @ RVA 0x33E2810

void VideoPlayerController__KNKHDOFPBOG
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *NMGJDFJDKBF,
               System_String_o *HONFNFNIBOB,MethodInfo *method)

{
  System_String_o *message;
  UnityEngine_Video_VideoPlayer_o *JGHIJMJNJLE;
  MethodInfo *method_00;
  
  if ((DAT_04567eb4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034e2854 to 035e285b has its CatchHandler @ 034e28ec */
    FUN_01bab630(&StringLiteral_15611);
    DAT_04567eb4 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  message = System_String__Concat(StringLiteral_15611,HONFNFNIBOB,(MethodInfo *)0x0);
                    /* try { // try from 034e2870 to 035e287b has its CatchHandler @ 034e28e4 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e2880 to 035e288b has its CatchHandler @ 034e28e0 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 034e288c to 035e2897 has its CatchHandler @ 034e28dc */
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
                    /* try { // try from 034e2898 to 035e28d3 has its CatchHandler @ 034e27b8 */
  if ((__this->fields)._LFALNJINAPO_k__BackingField != false) {
    VideoPlayerController__JLDEKOIIPDE(__this,JGHIJMJNJLE,method_00);
    return;
  }
  return;
}

