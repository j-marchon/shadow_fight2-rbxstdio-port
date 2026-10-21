// UIFigures.UIFigure$$get_mainTexture @ RVA 0x3423754

UnityEngine_Texture_o *
UIFigures_UIFigure__get_mainTexture(UIFigures_UIFigure_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Texture_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *pUVar3;
  
  if ((DAT_045680f4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Graphic_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045680f4 = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields).super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_UI_Graphic_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    return (UnityEngine_Texture_o *)UnityEngine_UI_Graphic_TypeInfo->static_fields->s_WhiteTexture;
  }
  pUVar3 = (__this->fields).super.m_Corners;
  if (pUVar3 != (UnityEngine_Vector3_array *)0x0) {
    pUVar2 = (UnityEngine_Texture_o *)
             UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

