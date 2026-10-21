// Nekki.SF2.GUI.Map.MapPanel$$Init @ RVA 0x349EE64

void Nekki_SF2_GUI_Map_MapPanel__Init
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,bool BDACJNPGHKF,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  UnityEngine_Object_o *x;
  ulong uVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar5;
  Nekki_SF2_GUI_Shop_Scroll_o **ppNVar6;
  UnityEngine_GameObject_o *pUVar7;
  
  if ((DAT_04568481 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Scroll>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BaseScrollContent>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8833);
    DAT_04568481 = 1;
  }
  (__this->fields)._LGKLAOCDMGF_k__BackingField = BDACJNPGHKF;
  pNVar2 = (Nekki_SF2_GUI_Shop_Scroll_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Scroll>__);
  ppNVar6 = &(__this->fields)._IENOFGNDANH_k__BackingField;
  *ppNVar6 = pNVar2;
  thunk_FUN_01c20e04(ppNVar6,pNVar2);
  if ((*ppNVar6 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) &&
     (pNVar5 = ((*ppNVar6)->fields)._itemsScroll, pNVar5 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0)) {
    (pNVar5->fields).MoveOnlyScrollingOrth = true;
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this,false,method);
    pUVar7 = (__this->fields)._baseScrollContentPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar7 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_BaseScrollContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar7,Method_UnityEngine_GameObject_GetComponent<BaseScrollContent>__);
      (__this->fields).ECEJKFAFODM = pNVar3;
      thunk_FUN_01c20e04();
      Nekki_SF2_GUI_Map_MapPanel__FELAHGOCMMN(__this,method_00);
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponent<object>
                    ((UnityEngine_Component_o *)__this,
                     Method_UnityEngine_Component_GetComponent<Graphic>__);
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto LAB_0359f034;
        uVar4 = (*(code *)x->klass[1].vtable._0_Equals.method)
                          (x,x->klass[1].vtable._1_Finalize.methodPtr);
        if ((uVar4 & 1) != 0) {
          (*(code *)x->klass[1].vtable._1_Finalize.method)
                    (x,0,x->klass[1].vtable._2_GetHashCode.methodPtr);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_8833,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
LAB_0359f034:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

