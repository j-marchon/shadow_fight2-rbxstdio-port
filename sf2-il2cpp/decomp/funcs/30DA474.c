// Nekki.SF2.GUI.TableView$$FJPJBCIJGML @ RVA 0x30DA474

void Nekki_SF2_GUI_TableView__FJPJBCIJGML
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_SocialPlatforms_Range_o DFBACAOEOAJ,
               UnityEngine_SocialPlatforms_Range_o HIFNAFEEFBF,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_SocialPlatforms_Range_Fields method_00;
  
  method_00 = HIFNAFEEFBF.fields;
  if (DFBACAOEOAJ.fields.from < HIFNAFEEFBF.fields.from) {
    iVar1 = HIFNAFEEFBF.fields.from - DFBACAOEOAJ.fields.from;
    do {
      Nekki_SF2_GUI_TableView__IGJGHJDHOKD(__this,false,(MethodInfo *)method_00);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  for (iVar1 = LECDDPFLBEM__KIKGKKGDCKK(HIFNAFEEFBF,(MethodInfo *)0x0);
      iVar2 = LECDDPFLBEM__KIKGKKGDCKK(DFBACAOEOAJ,(MethodInfo *)0x0), iVar1 < iVar2;
      iVar1 = iVar1 + 1) {
    Nekki_SF2_GUI_TableView__IGJGHJDHOKD(__this,true,(MethodInfo *)method_00);
  }
  return;
}

