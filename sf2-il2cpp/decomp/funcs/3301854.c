// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$Update @ RVA 0x3301854

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o *__this_01;
  ClanLogoImage_o *pCVar2;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_UI_Graphic_o *__this_03;
  UnityEngine_RectTransform_o *t1;
  UnityEngine_GameObject_o *__this_04;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o *pNVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567723 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567723 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).LBFACKCBBOD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).LBFACKCBBOD;
  if (((pNVar3 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) &&
      (__this_00 = (pNVar3->fields)._label, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) &&
     (__this_01 = Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
                            ((Nekki_SF2_GUI_TextPic_o *)__this_00,false,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_ResolutionImage__o *)0x0)) {
    if ((__this_01->fields)._size < 1) {
      return;
    }
    pCVar2 = (__this->fields).NCEGFHDDGOO;
    if (pCVar2 != (ClanLogoImage_o *)0x0) {
      __this_02 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_UI_Graphic_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,0,
                             Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if (__this_03 != (UnityEngine_UI_Graphic_o *)0x0) {
        t1 = UnityEngine_UI_Graphic__get_rectTransform(__this_03,(MethodInfo *)0x0);
        UVar4 = UnityEngine_TransformExtensions__GetWorldRect
                          (t1,(UnityEngine_Vector3_array *)0x0,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          value.fields.y = UVar4.fields.m_YMin + UVar4.fields.m_Height * 0.5;
          value.fields.x = UVar4.fields.m_XMin + UVar4.fields.m_Width * 0.5;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_position(__this_02,value,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).NCEGFHDDGOO;
          if ((pCVar2 != (ClanLogoImage_o *)0x0) &&
             (__this_04 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_04,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

