// JBBABEFDNOL$$MAHFCKJGBPP @ RVA 0x3026B10

void JBBABEFDNOL__MAHFCKJGBPP(JBBABEFDNOL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  byte bVar1;
  LEGDPJHPEOB_o *__this_00;
  PKHMIGFEJCL_o **ppPVar2;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  DNELIPCHKLK_o *__this_02;
  MEJIKMPNBNL_o *__this_03;
  OHDDKGHEEPA_o *AOMBONOOJFP;
  System_String_o *pSVar3;
  
                    /* try { // try from 03126b30 to 03226b37 has its CatchHandler @ 03126d94 */
  if ((DAT_04565c95 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
                    /* try { // try from 03126b44 to 03226b53 has its CatchHandler @ 03126d88 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_22313);
                    /* try { // try from 03126b8c to 03226bb7 has its CatchHandler @ 03126d98 */
    DAT_04565c95 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(__this_00->fields).AAJBIMFNMBB;
                    /* try { // try from 03126bbc to 03226bc7 has its CatchHandler @ 03126d90 */
                    /* try { // try from 03126bc8 to 03226d73 has its CatchHandler @ 031269b8 */
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).DEKCPPOJFEH,__this_01,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_02 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_02,(MethodInfo *)0x0);
    if ((__this_01 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) && (__this_02 != (DNELIPCHKLK_o *)0x0)) {
      DNELIPCHKLK__LGOFNFEIKFB(__this_02,(__this_01->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
      pSVar3 = (__this_02->fields).GDPFBDIJNHA;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = NLPJLHOEAOE__KHHBHBLIANB(pSVar3,(MethodInfo *)0x0);
      if ((__this_03 == (MEJIKMPNBNL_o *)0x0) ||
         (AOMBONOOJFP = (OHDDKGHEEPA_o *)
                        MEJIKMPNBNL__KKPHCCBPIMN
                                  (__this_03,(__this_02->fields).GJFJPLHCBKJ,(MethodInfo *)0x0),
         AOMBONOOJFP == (OHDDKGHEEPA_o *)0x0)) {
        pSVar3 = System_String__Format
                           (StringLiteral_22313,(Il2CppObject *)__this_03,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      }
      else {
        bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
        if (((AOMBONOOJFP->klass->_2).naturalAligment < bVar1) ||
           ((AOMBONOOJFP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        JJPNLEPEAFM__NFKLNBFKKLF(AOMBONOOJFP,(MethodInfo *)0x0);
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

