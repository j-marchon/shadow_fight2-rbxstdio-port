// Nekki.SF2.GUI.TableView$$BGOLOHLDFGK @ RVA 0x30DA4F4

void Nekki_SF2_GUI_TableView__BGOLOHLDFGK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_SocialPlatforms_Range_o UVar2;
  MethodInfo *in_x3;
  KELJDKIIHMM_o *pKVar3;
  ulong uVar4;
  int iVar5;
  
  UVar2 = Nekki_SF2_GUI_TableView__GFAFEFPKGLH(__this,method);
  iVar5 = UVar2.fields.count;
  if (0 < iVar5) {
    uVar4 = (ulong)UVar2.fields & 0xffffffff;
    iVar1 = iVar5;
    do {
      Nekki_SF2_GUI_TableView__KGDGDCKDLKG(__this,(int32_t)uVar4,true,in_x3);
      iVar1 = iVar1 + -1;
      uVar4 = (ulong)((int32_t)uVar4 + 1);
    } while (iVar1 != 0);
  }
  pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
    (pKVar3->fields).CIMDIANAHIM.fields.from = UVar2.fields.from;
    (pKVar3->fields).CIMDIANAHIM.fields.count = iVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

