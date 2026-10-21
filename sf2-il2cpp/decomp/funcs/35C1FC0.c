// IMAPABEJECG$$CBNFJDHJCNK @ RVA 0x35C1FC0

void IMAPABEJECG__CBNFJDHJCNK(System_Action_o *BLMFLPJJMPF,bool BKGBLAKKMDK,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *a;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  NHJCFGACFDF_o *pNVar5;
  
  if ((DAT_04568f37 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    FUN_01bab630(&Method_IMAPABEJECG_LJMPHPOOEHE_FIFJEPLJFGO__);
    FUN_01bab630(&IMAPABEJECG_LJMPHPOOEHE_TypeInfo);
    FUN_01bab630(&StringLiteral_6659);
    DAT_04568f37 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(IMAPABEJECG_LJMPHPOOEHE_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)BLMFLPJJMPF;
    method_00 = (MethodInfo *)thunk_FUN_01c20e04(pIVar2,BLMFLPJJMPF);
    IMAPABEJECG__PPCPAHAPCNB(method_00);
    a = IMAPABEJECG__PLPICDIFHHG(method_01);
    bVar1 = System_String__op_Inequality(a,StringLiteral_6659,(MethodInfo *)0x0);
    if ((bVar1) || ((bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), !bVar1 && (!BKGBLAKKMDK)))
       ) {
      pIVar4 = pIVar2->klass;
      if (pIVar4 != (Il2CppClass *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c20a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pIVar4->_1).namespaze)
                  ((pIVar4->_1).element_class,*(undefined8 *)&(pIVar4->_1).byval_arg.bits);
        return;
      }
                    /* try { // try from 036c20a8 to 037c20af has its CatchHandler @ 036c2354 */
      return;
    }
                    /* try { // try from 036c20c4 to 037c20cf has its CatchHandler @ 036c234c */
    pNVar5 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    uVar3 = thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    if (pNVar5 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c2114 to 037c211f has its CatchHandler @ 036c2328 */
                    /* WARNING: Could not recover jumptable at 0x036c2118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar5->klass->vtable)._5_unknown.methodPtr)
                (pNVar5,uVar3,(pNVar5->klass->vtable)._5_unknown.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

