// AFFHKININGD$$IJKNNMOKCKL @ RVA 0x3342E10

bool AFFHKININGD__IJKNNMOKCKL(AFFHKININGD_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
                    /* catch() { ... } // from try @ 03442b08 with catch @ 03442e14
                       catch() { ... } // from try @ 03442bcc with catch @ 03442e14
                       catch() { ... } // from try @ 03442c90 with catch @ 03442e14
                       catch() { ... } // from try @ 03442d24 with catch @ 03442e14
                       catch() { ... } // from try @ 03442dd8 with catch @ 03442e14
                       catch() { ... } // from try @ 03442e0c with catch @ 03442e14 */
  if ((DAT_045679a0 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    DAT_045679a0 = 1;
  }
  pSVar3 = (__this->fields).MECHOBPGHFJ;
  if (pSVar3 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    if ((pSVar3->fields)._size < 2) {
      bVar1 = false;
    }
    else {
                    /* try { // try from 03442e60 to 03542f93 has its CatchHandler @ 03442e60
                       catch() { ... } // from try @ 03442e60 with catch @ 03442e60
                       catch() { ... } // from try @ 03443044 with catch @ 03442e60
                       catch() { ... } // from try @ 034430c8 with catch @ 03442e60
                       catch() { ... } // from try @ 034430d0 with catch @ 03442e60
                       catch() { ... } // from try @ 03443178 with catch @ 03442e60 */
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).GENLHJOKOIJ.fields,(MethodInfo *)0x0);
      bVar1 = 1 < iVar2;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

