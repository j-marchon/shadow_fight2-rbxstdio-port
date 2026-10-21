// Nekki.SF2.GUI.TableView$$DOGOHNGEGLE @ RVA 0x30D8B68

void Nekki_SF2_GUI_TableView__DOGOHNGEGLE
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_SocialPlatforms_Range_o DFBACAOEOAJ,
               UnityEngine_SocialPlatforms_Range_o HIFNAFEEFBF,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = DFBACAOEOAJ.fields.from;
  while (iVar1 = iVar1 + -1, HIFNAFEEFBF.fields.from <= iVar1) {
    Nekki_SF2_GUI_TableView__KGDGDCKDLKG(__this,iVar1,false,method);
  }
  iVar1 = LECDDPFLBEM__KIKGKKGDCKK(DFBACAOEOAJ,(MethodInfo *)0x0);
  while( true ) {
    iVar1 = iVar1 + 1;
    iVar2 = LECDDPFLBEM__KIKGKKGDCKK(HIFNAFEEFBF,(MethodInfo *)0x0);
    if (iVar2 < iVar1) break;
    Nekki_SF2_GUI_TableView__KGDGDCKDLKG(__this,iVar1,true,method);
  }
  return;
}

