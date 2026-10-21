// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$NLMPHGFNKBA @ RVA 0x34DC358

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__NLMPHGFNKBA
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__BGJLGOKOABF(__this,(MethodInfo *)IDCGLBOIAFJ);
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._8_unknown.methodPtr)
              (__this,IDCGLBOIAFJ,(__this->klass->vtable)._8_unknown.method);
    (__this->fields).IAAABJBDEMK = 4;
    (__this->fields).HCOEDJGHJNA = true;
    return;
  }
  iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
  if (iVar1 == 1) {
    iVar3 = (*__this->klass[1]._1.image)(__this,IDCGLBOIAFJ,__this->klass[1]._1.gc_desc);
  }
  else {
    if (iVar1 == 0) {
      Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME(__this,method_00);
      return;
    }
    if (1 < iVar1 - 0x2711U) goto LAB_035dc3f8;
    iVar3 = 0x29c6;
  }
  (__this->fields).FOCJNAFIFDF = iVar3;
LAB_035dc3f8:
  (__this->fields).IAAABJBDEMK = 6;
  return;
}

