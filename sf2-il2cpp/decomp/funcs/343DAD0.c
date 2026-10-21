// Nekki.SF2.GUI.Glyphs.ImageGlyph$$Refresh @ RVA 0x343DAD0

void Nekki_SF2_GUI_Glyphs_ImageGlyph__Refresh
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,
               System_Collections_Generic_List_Bounds__o *PBEBNABDPFF,float COKDAPPLGKH,
               bool KLJAOIEBNHL,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  BOGDEGPCIJI_o *pBVar2;
  Nekki_SF2_GUI_Glyphs_ImageGlyph_StaticFields *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_045681f6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo);
    DAT_045681f6 = 1;
  }
  pBVar2 = (__this->fields).super._FAPFIEABBBO_k__BackingField;
  if ((pBVar2 != (BOGDEGPCIJI_o *)0x0) &&
     (pNVar1 = (__this->fields)._IANGGJCONIH_k__BackingField,
     pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    fVar6 = (pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.b;
    fVar7 = (pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.a;
    fVar5 = (pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.g;
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              ((ulong)(uint)(pBVar2->fields)._BFEKLJGLHEH_k__BackingField.fields.r,fVar5,fVar6,fVar7
               ,pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    if (KLJAOIEBNHL) {
      pNVar1 = (__this->fields)._IANGGJCONIH_k__BackingField;
      if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0353dbec;
      fVar4 = (float)(*(pNVar1->klass->vtable)._22_get_color.methodPtr)
                               (pNVar1,(pNVar1->klass->vtable)._22_get_color.method);
      if ((Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(fVar4 * (pNVar3->GKKLLBCACBA).fields.r),
                 fVar5 * (pNVar3->GKKLLBCACBA).fields.g,fVar6 * (pNVar3->GKKLLBCACBA).fields.b,
                 fVar7 * (pNVar3->GKKLLBCACBA).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
    }
    Nekki_SF2_GUI_Glyphs_Glyph__Refresh
              ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,PBEBNABDPFF,COKDAPPLGKH,KLJAOIEBNHL,
               (MethodInfo *)0x0);
    return;
  }
LAB_0353dbec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

