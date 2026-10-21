// VideoPlayerController$$ICKBAPOLICK @ RVA 0x33E2160

System_Collections_IEnumerator_o *
VideoPlayerController__ICKBAPOLICK(VideoPlayerController_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034e2160 to 035e2167 has its CatchHandler @ 034e2450 */
                    /* try { // try from 034e2168 to 035e2173 has its CatchHandler @ 034e2448 */
  if ((DAT_04567eb2 & 1) == 0) {
    FUN_01bab630(&VideoPlayerController_ICEHGLDMKOM_TypeInfo);
    DAT_04567eb2 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(VideoPlayerController_ICEHGLDMKOM_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
                    /* try { // try from 034e21b8 to 035e21db has its CatchHandler @ 034e2434 */
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

