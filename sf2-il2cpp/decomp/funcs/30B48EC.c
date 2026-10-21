// Nekki.SF2.GUI.TextPic$$Awake @ RVA 0x30B48EC

void Nekki_SF2_GUI_TextPic__Awake(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar3;
  MethodInfo *method_00;
  
  if ((DAT_045661f6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Button>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
    DAT_045661f6 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic__MGJFCJLEHLC(__this,method_00);
  pSVar1 = (System_Action_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Button>__);
  if (pSVar1 == (System_Action_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_031b49dc;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      pSVar1 = (System_Action_o *)0x0;
    }
    else {
      pSVar1 = (System_Action_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar2,
                          Method_UnityEngine_Component_GetComponent<Button>__);
    }
  }
  if (__this != (Nekki_SF2_GUI_TextPic_o *)0x0) {
    (__this->fields).MPHECBPOAIC = pSVar1;
    thunk_FUN_01c20e04(&(__this->fields).MPHECBPOAIC);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
        pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0;
      }
      else {
        pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar2,
                            Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
      }
      (__this->fields).KALCEPKCEPP = pNVar3;
      thunk_FUN_01c20e04(&(__this->fields).KALCEPKCEPP);
      return;
    }
  }
LAB_031b49dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

