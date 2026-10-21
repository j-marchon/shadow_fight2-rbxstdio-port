// Nekki.SF2.GUI.Map.BattlePrize$$CCLACGABBDP @ RVA 0x3218D18

void Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,
               Nekki_SF2_GUI_Map_BattlePrizeElement_o *NMCCKJIIBKK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Action_o *CJNHFNHJHPE;
  System_Collections_Generic_List_BattlePrizeElement__o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  Nekki_SF2_GUI_Map_BattlePrizeElement_array *pNVar4;
  
  if ((DAT_04566eeb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrize_FAOOCIFKPEM__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566eeb = 1;
  }
  (__this->fields).DKDLLBENAFE = 0.0;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)NMCCKJIIBKK,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if (NMCCKJIIBKK != (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)NMCCKJIIBKK,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._layoutGroup;
      if ((__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
        CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        Nekki_SF2_GUI_Map_BattlePrizeElement__add_OnRendered
                  (NMCCKJIIBKK,CJNHFNHJHPE,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<BattlePrizeElement>_Add__;
        __this_01 = (__this->fields).JMAMFIMIIFA;
        if (__this_01 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
          pNVar4 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pNVar4 != (Nekki_SF2_GUI_Map_BattlePrizeElement_array *)0x0) {
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pNVar4->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pNVar4->m_Items[(int)uVar1] = NMCCKJIIBKK;
              thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,NMCCKJIIBKK);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)NMCCKJIIBKK,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

