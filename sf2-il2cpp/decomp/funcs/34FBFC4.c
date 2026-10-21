// Nekki.SF2.GUI.Common.Hints.HintGroup$$LDEODGHMPCG @ RVA 0x34FBFC4

void Nekki_SF2_GUI_Common_Hints_HintGroup__LDEODGHMPCG
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t OHLKNCPBCBL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *value;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_HintUI__o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Common_Hints_HintUI_array *pNVar5;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568826 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
                    /* try { // try from 035fc00c to 036fc013 has its CatchHandler @ 035fc07c */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Add__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
                    /* try { // try from 035fc028 to 036fc033 has its CatchHandler @ 035fc070 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568826 = 1;
  }
                    /* try { // try from 035fc034 to 036fc063 has its CatchHandler @ 035fbf20 */
  if ((GKOFFCMIOFC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GKOFFCMIOFC__LDEODGHMPCG(OHLKNCPBCBL,1,(MethodInfo *)0x0);
                    /* try { // try from 035fc064 to 036fc067 has its CatchHandler @ 035fc078 */
                    /* try { // try from 035fc068 to 036fc06b has its CatchHandler @ 035fc074 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035fc06c to 036fc093 has its CatchHandler @ 035fbf20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc028 with catch @ 035fc070
                        */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc068 with catch @ 035fc074
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc064 with catch @ 035fc078
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc00c with catch @ 035fc07c
                        */
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar3) {
    return;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) {
                    /* try { // try from 035fc094 to 036fc097 has its CatchHandler @ 035fc0b8 */
    __this_01 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035fc098 to 036fc0bf has its CatchHandler @ 035fbf20 */
    local_48.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
                    /* catch() { ... } // from try @ 035fc094 with catch @ 035fc0b8 */
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = OHLKNCPBCBL;
    value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* try { // try from 035fc0c0 to 036fc0c7 has its CatchHandler @ 035fc0dc */
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 035fc0c8 to 036fc0d3 has its CatchHandler @ 035fbf20 */
      UnityEngine_Object__set_name(__this_01,value,(MethodInfo *)0x0);
                    /* try { // try from 035fc0d4 to 036fc0db has its CatchHandler @ 035fc0dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035fc0c0 with catch @ 035fc0dc
                       catch(type#2 @ 00000000) { ... } // from try @ 035fc0d4 with catch @ 035fc0dc
                        */
      __this_02 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        UnityEngine_Transform__SetParent
                  (__this_02,(__this->fields)._HintsParent,false,(MethodInfo *)0x0);
        bVar3 = Nekki_SF2_GUI_Common_Hints_HintUI__get_IsSeparator(__this_00,(MethodInfo *)0x0);
        if (!bVar3) {
          bVar3 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable(__this,method_00);
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo);
          }
          bVar4 = ECNCJPCKOLN__IDEEKLMIOOD(OHLKNCPBCBL,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Common_Hints_HintGroup__HPFLNMEJPEF(__this,bVar3 && bVar4,method_01);
        }
        lVar2 = Method_System_Collections_Generic_List<HintUI>_Add__;
        __this_03 = (__this->fields).DEDJHBCOMCJ;
        if (__this_03 != (System_Collections_Generic_List_HintUI__o *)0x0) {
          pNVar5 = (__this_03->fields)._items;
          (__this_03->fields)._version = (__this_03->fields)._version + 1;
          if (pNVar5 != (Nekki_SF2_GUI_Common_Hints_HintUI_array *)0x0) {
            uVar1 = (__this_03->fields)._size;
            if (uVar1 < (uint)pNVar5->max_length) {
              (__this_03->fields)._size = uVar1 + 1;
              pNVar5->m_Items[(int)uVar1] = __this_00;
              thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,__this_00);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

