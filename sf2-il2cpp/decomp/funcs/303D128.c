// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$AGDJPBMLGHD @ RVA 0x303D128

System_String_o *
Nekki_SF2_GUI_DebugModules_ModelDebugUI__AGDJPBMLGHD(OLKKAIFGGAK_o *INNMCFJNEAE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t value;
  System_Text_StringBuilder_o *__this;
  ECENNHNBAME_o *pEVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  OPNFCOGALLI_o *__this_01;
  MethodInfo *extraout_x1;
  MMDPNDAECII_o *pMVar5;
  int index;
  
                    /* try { // try from 0313d134 to 0323d1cf has its CatchHandler @ 0313d134
                       catch() { ... } // from try @ 0313d134 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d2b4 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d324 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d374 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d3f8 with catch @ 0313d134 */
  if ((DAT_04565d99 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_173);
    FUN_01bab630(&StringLiteral_584);
    FUN_01bab630(&StringLiteral_1246);
    DAT_04565d99 = 1;
    method = extraout_x1;
  }
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (INNMCFJNEAE == (OLKKAIFGGAK_o *)0x0) goto LAB_0313d318;
  pEVar3 = OLKKAIFGGAK__FMEOPPFIHCB(INNMCFJNEAE,(MethodInfo *)0x0);
                    /* try { // try from 0313d1d0 to 0323d1e3 has its CatchHandler @ 0313d354 */
  bVar2 = OLKKAIFGGAK__NDBKBPEHEON(INNMCFJNEAE,(MethodInfo *)0x0);
  if (bVar2) {
    pMVar5 = (INNMCFJNEAE->fields).GJLEPEPAOKD;
    if (pMVar5 == (MMDPNDAECII_o *)0x0) goto LAB_0313d318;
    value = (pMVar5->fields).AGHCNFGKHCH;
                    /* try { // try from 0313d1f0 to 0323d1f3 has its CatchHandler @ 0313d350 */
    __this_00 = OLKKAIFGGAK__OBKEHOHFBAA(INNMCFJNEAE,(MethodInfo *)0x0);
                    /* try { // try from 0313d1f4 to 0323d1f7 has its CatchHandler @ 0313d34c */
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0313d318;
    iVar1 = (__this_00->fields)._size;
                    /* try { // try from 0313d1fc to 0323d207 has its CatchHandler @ 0313d348 */
    if (0 < iVar1) {
                    /* try { // try from 0313d20c to 0323d20f has its CatchHandler @ 0313d344 */
      index = 0;
      do {
                    /* try { // try from 0313d21c to 0323d21f has its CatchHandler @ 0313d33c */
                    /* try { // try from 0313d224 to 0323d227 has its CatchHandler @ 0313d334 */
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d318;
        System_Text_StringBuilder__Append(__this,pSVar4,(MethodInfo *)0x0);
        if (index < iVar1 + -1) {
                    /* try { // try from 0313d248 to 0323d25b has its CatchHandler @ 0313d358 */
          System_Text_StringBuilder__Append(__this,StringLiteral_584,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (iVar1 != index);
      goto LAB_0313d2c8;
    }
  }
  else {
                    /* try { // try from 0313d268 to 0323d26b has its CatchHandler @ 0313d328 */
    if (pEVar3 == (ECENNHNBAME_o *)0x0) {
                    /* try { // try from 0313d2a8 to 0323d2b3 has its CatchHandler @ 0313d330 */
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d318;
                    /* try { // try from 0313d2b4 to 0323d307 has its CatchHandler @ 0313d134 */
      System_Text_StringBuilder__Append(__this,StringLiteral_1246,(MethodInfo *)0x0);
      value = -1;
    }
    else {
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d318;
                    /* try { // try from 0313d284 to 0323d28b has its CatchHandler @ 0313d340 */
      System_Text_StringBuilder__Append(__this,(pEVar3->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      __this_01 = (INNMCFJNEAE->fields).OAKOFJJIOFF;
      if (__this_01 == (OPNFCOGALLI_o *)0x0) goto LAB_0313d318;
      value = OPNFCOGALLI__MKIHMHHJLHE(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 0313d29c to 0323d29f has its CatchHandler @ 0313d338 */
    }
  }
  if (__this != (System_Text_StringBuilder_o *)0x0) {
LAB_0313d2c8:
    System_Text_StringBuilder__Append(__this,StringLiteral_173,(MethodInfo *)0x0);
    if (-1 < value) {
      System_Text_StringBuilder__Append(__this,value,(MethodInfo *)0x0);
    }
                    /* try { // try from 0313d308 to 0323d30b has its CatchHandler @ 0313d32c */
                    /* try { // try from 0313d310 to 0323d313 has its CatchHandler @ 0313d358 */
                    /* WARNING: Could not recover jumptable at 0x0313d314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar4;
  }
LAB_0313d318:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0313d318 to 0323d323 has its CatchHandler @ 0313d340 */
  FUN_01bab8c8();
}

