// Nekki.SF2.GUI.Pvp.PlayerSelector$$Awake @ RVA 0x3330040

void Nekki_SF2_GUI_Pvp_PlayerSelector__Awake
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_array *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  undefined8 uVar4;
  UnityEngine_Transform_array **ppUVar5;
  
  if ((DAT_04567901 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Transform___TypeInfo);
    DAT_04567901 = 1;
  }
  pUVar1 = (UnityEngine_Transform_array *)FUN_01bab718(UnityEngine_Transform___TypeInfo,3);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 == (UnityEngine_Transform_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pUVar2,(((pUVar1->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03430154:
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)pUVar1->max_length != 0) {
    pUVar1->m_Items[0] = pUVar2;
    thunk_FUN_01c20e04(pUVar1->m_Items,pUVar2);
    pUVar2 = (__this->fields)._LeftBorderContainer;
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pUVar2,(((pUVar1->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_03430154;
    if (1 < (uint)pUVar1->max_length) {
      pUVar1->m_Items[1] = pUVar2;
      thunk_FUN_01c20e04(pUVar1->m_Items + 1,pUVar2);
      pUVar2 = (__this->fields)._RightBorderContainer;
      if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pUVar2,(((pUVar1->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_03430154;
      if (2 < (uint)pUVar1->max_length) {
        pUVar1->m_Items[2] = pUVar2;
        thunk_FUN_01c20e04(pUVar1->m_Items + 2,pUVar2);
        ppUVar5 = &(__this->fields).FCGNALDLKNA;
        *ppUVar5 = pUVar1;
        thunk_FUN_01c20e04(ppUVar5,pUVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

