// Nekki.SF2.GUI.TextPic$$MGJFCJLEHLC @ RVA 0x30B49E0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__MGJFCJLEHLC(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566213 & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Clear__);
    DAT_04566213 = 1;
  }
  pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
  (pUVar1->fields).m_Center.fields.x = 0.0;
  (pUVar1->fields).m_Center.fields.y = 0.0;
  *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4) = 0;
  *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z = 0;
  lVar2 = *(long *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    lVar2 = *(long *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
    (__this->fields)._CECMNNLFJKO_k__BackingField = (System_Collections_Generic_List_Bounds__o *)0x0
    ;
    pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
    (pUVar1->fields).m_Center.fields.x = 0.0;
    (pUVar1->fields).m_Center.fields.y = 0.0;
    *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z = 0;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

