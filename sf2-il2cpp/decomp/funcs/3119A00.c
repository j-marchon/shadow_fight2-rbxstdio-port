// NGFEKJBMGEB$$IPOELNKMKBA @ RVA 0x3119A00

System_String_o * NGFEKJBMGEB__IPOELNKMKBA(int64_t FDNNNELHJJN,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  System_DateTime_Fields local_28;
  
                    /* try { // try from 03219a04 to 03319a0b has its CatchHandler @ 03219b10 */
                    /* try { // try from 03219a18 to 03319a23 has its CatchHandler @ 03219b0c */
  if ((DAT_045665da & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_22355);
    DAT_045665da = 1;
    method = extraout_x1;
  }
  local_28._dateData = 0;
                    /* try { // try from 03219a64 to 03319a73 has its CatchHandler @ 03219b04 */
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo,method);
  }
                    /* try { // try from 03219a84 to 03319a87 has its CatchHandler @ 03219afc */
                    /* try { // try from 03219a88 to 03319a8f has its CatchHandler @ 03219b00 */
  System_DateTime___ctor((System_DateTime_o)&local_28,0x7b2,1,1,0,0,0,0,1,(MethodInfo *)0x0);
                    /* try { // try from 03219aac to 03319aaf has its CatchHandler @ 03219af4 */
                    /* try { // try from 03219ab0 to 03319ab7 has its CatchHandler @ 03219af8 */
  local_28._dateData =
       (uint64_t)
       System_DateTime__AddSeconds
                 ((System_DateTime_o)&local_28,(double)FDNNNELHJJN,(MethodInfo *)0x0);
                    /* try { // try from 03219ab8 to 03319ae7 has its CatchHandler @ 03219910 */
  local_34 = System_DateTime__get_Day((System_DateTime_o)&local_28,(MethodInfo *)0x0);
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* try { // try from 03219ae8 to 03319aef has its CatchHandler @ 03219b08 */
  local_38 = System_DateTime__get_Month((System_DateTime_o)&local_28,(MethodInfo *)0x0);
                    /* try { // try from 03219af0 to 03319b2b has its CatchHandler @ 03219910 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219aac with catch @ 03219af4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219ab0 with catch @ 03219af8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a84 with catch @ 03219afc
                        */
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a88 with catch @ 03219b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a64 with catch @ 03219b04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219ae8 with catch @ 03219b08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a18 with catch @ 03219b0c
                        */
  local_3c = System_DateTime__get_Year((System_DateTime_o)&local_28,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a04 with catch @ 03219b10
                        */
  arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
                    /* try { // try from 03219b2c to 03319b2f has its CatchHandler @ 03219b58 */
                    /* try { // try from 03219b30 to 03319b5f has its CatchHandler @ 03219910 */
  pSVar1 = System_String__Format(StringLiteral_22355,arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar1;
}

