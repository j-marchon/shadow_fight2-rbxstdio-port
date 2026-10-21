// Nekki.SF2.GUI.TableView$$KLAGNKHFMCE @ RVA 0x30D9978

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__KLAGNKHFMCE
          (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableViewCell_o *__this_00;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *parent;
  
  if ((DAT_04566345 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TableViewCell>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566345 = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).KFCHMBGIPJK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    pUVar3 = (__this->fields).KFCHMBGIPJK;
    parent = (pNVar2->fields).super.m_Content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,(UnityEngine_Transform_o *)parent,false,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (Nekki_SF2_GUI_TableViewCell_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar3,Method_UnityEngine_GameObject_GetComponent<TableViewCell>__),
       __this_00 != (Nekki_SF2_GUI_TableViewCell_o *)0x0)) {
      Nekki_SF2_GUI_TableViewCell__set_RowNumber(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
      Nekki_SF2_GUI_TableView__LBGGFHONFIG(__this,__this_00,JDEFJPHCNMM,true,in_x4);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

