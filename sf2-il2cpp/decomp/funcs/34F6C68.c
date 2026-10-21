// OLKKAIFGGAK$$CJMEKBIFENJ @ RVA 0x34F6C68

void OLKKAIFGGAK__CJMEKBIFENJ(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OLKKAIFGGAK_o *__this_00;
  OLKKAIFGGAK_GNGMELOMKNL_o *pOVar3;
  MethodInfo *extraout_x1;
  System_Action_OLKKAIFGGAK_GNGMELOMKNL__o *pSVar4;
  
                    /* catch() { ... } // from try @ 035f6c40 with catch @ 035f6c68 */
                    /* catch() { ... } // from try @ 035f6c3c with catch @ 035f6c6c */
                    /* catch() { ... } // from try @ 035f6b88 with catch @ 035f6c70 */
                    /* catch() { ... } // from try @ 035f6a8c with catch @ 035f6c74 */
                    /* catch() { ... } // from try @ 035f6a64 with catch @ 035f6c78 */
  if ((DAT_045687f2 & 1) == 0) {
    FUN_01bab630(&OLKKAIFGGAK_GNGMELOMKNL_TypeInfo);
    DAT_045687f2 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035f6c94 to 036f6c97 has its CatchHandler @ 035f6cb8 */
  __this_00 = (__this->fields).NFMBPIPEKGF;
                    /* try { // try from 035f6c98 to 036f6cbf has its CatchHandler @ 035f6954 */
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__JPFGODGJKNP(__this_00,method);
    return;
  }
  bVar1 = OLKKAIFGGAK__HODPOCMNNIN(__this,method);
  if (!bVar1) {
    return;
  }
                    /* catch() { ... } // from try @ 035f6c94 with catch @ 035f6cb8 */
                    /* try { // try from 035f6cc0 to 036f6cc7 has its CatchHandler @ 035f6cdc */
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).MPABKLDPGLA.fields,(MethodInfo *)0x0);
  if (iVar2 == 0) {
                    /* try { // try from 035f6cc8 to 036f6cd3 has its CatchHandler @ 035f6954 */
                    /* try { // try from 035f6cd4 to 036f6cdb has its CatchHandler @ 035f6cdc */
    pOVar3 = (OLKKAIFGGAK_GNGMELOMKNL_o *)thunk_FUN_01bda818(OLKKAIFGGAK_GNGMELOMKNL_TypeInfo);
                    /* catch() { ... } // from try @ 035f6c28 with catch @ 035f6cdc
                       catch() { ... } // from try @ 035f6cc0 with catch @ 035f6cdc
                       catch() { ... } // from try @ 035f6cd4 with catch @ 035f6cdc */
    OLKKAIFGGAK_GNGMELOMKNL___ctor(pOVar3,0xd,0.0,0,-1,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).JAHLLCFBFNF;
    if (pSVar4 == (System_Action_OLKKAIFGGAK_GNGMELOMKNL__o *)0x0) goto LAB_035f6d84;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,pOVar3,(pSVar4->fields).super.super.method);
  }
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).MPABKLDPGLA.fields,(MethodInfo *)0x0);
  pOVar3 = (OLKKAIFGGAK_GNGMELOMKNL_o *)thunk_FUN_01bda818(OLKKAIFGGAK_GNGMELOMKNL_TypeInfo);
  OLKKAIFGGAK_GNGMELOMKNL___ctor(pOVar3,0xd,-1.0,-1,iVar2,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).BHJDECIMHGN;
  if (pSVar4 != (System_Action_OLKKAIFGGAK_GNGMELOMKNL__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035f6d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,pOVar3,(pSVar4->fields).super.super.method);
    return;
  }
LAB_035f6d84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

