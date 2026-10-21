// Nekki.SF2.GUI.Glyphs.Glyph$$ComputePosition @ RVA 0x336E810

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Glyphs_Glyph__ComputePosition
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_01;
  Il2CppObject *pIVar3;
  MethodInfo_26E4ADC *method_00;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar4;
  Il2CppClass *pIVar5;
  UnityEngine_Vector2_o value;
  System_Nullable_Vector2__o __this_02;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_04567b01 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    DAT_04567b01 = 1;
  }
  if (((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
      (__this_00 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField,
      __this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)) &&
     (__this_01 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (__this->fields)._CBEOMKIMKNO_k__BackingField,
                             Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__)
     , __this_01 != (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0)) {
    bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_01,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1 = 0;
      (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x = 0.0;
      (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y = 0.0;
      return;
    }
    pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
    iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_01,(MethodInfo *)0x0);
    if ((pSVar4 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,iVar2,
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
       pIVar3 != (Il2CppObject *)0x0)) {
      pIVar5 = pIVar3[1].klass;
      pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_01,(MethodInfo *)0x0);
      if ((pSVar4 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
         (method_00 = Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__,
         pIVar3 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,iVar2 + -1,
                             Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
         pIVar3 != (Il2CppObject *)0x0)) {
        local_48 = 0.0;
        value.fields.x = (SUB84(pIVar5,0) + SUB84(pIVar3[1].klass,0)) * 0.5;
        local_50 = 0;
        value.fields.y =
             ((float)((ulong)pIVar5 >> 0x20) + (float)((ulong)pIVar3[1].klass >> 0x20)) * 0.5;
        __this_02.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
        __this_02.fields._0_8_ = &local_50;
        System_Nullable<Vector2>___ctor(__this_02,value,(MethodInfo_27FC874 *)method_00);
        (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue =
             (bool_conflict)(undefined1)local_50;
        *(undefined3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1 =
             local_50._1_3_;
        (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x = (float)local_50._4_4_;
        (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y = local_48;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

