// Nekki.SF2.GUI.Map.MapButtonViewBase$$OLOBIPCHMCC @ RVA 0x31B89E4

void Nekki_SF2_GUI_Map_MapButtonViewBase__OLOBIPCHMCC
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  System_Collections_Generic_List_NPKKNCCEIND__o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Map_RaidKey_o *item;
  System_Collections_Generic_List_RaidKey__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Nekki_SF2_GUI_Map_RaidKey_array *pNVar3;
  uint index;
  
                    /* try { // try from 032b89f0 to 033b8a23 has its CatchHandler @ 032b8c98 */
  if ((DAT_04566bce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Item__);
    DAT_04566bce = 1;
  }
                    /* try { // try from 032b8a3c to 033b8a53 has its CatchHandler @ 032b8cc0 */
  (*(__this->klass->vtable)._4_GNMFDGIDOKJ.methodPtr)
            (__this,(__this->klass->vtable)._4_GNMFDGIDOKJ.method);
  __this_00 = (__this->fields).super.ADHBPAAHOKK;
  if (__this_00 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
    index = 0;
    method_00 = extraout_x1;
    do {
      if ((__this_00->fields)._size <= (int)index) {
        Nekki_SF2_GUI_Map_MapButtonViewBase__BGOAPKAMKOK(__this,method_00);
        return;
      }
      method_00 = (MethodInfo *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Item__);
      if (method_00 == (MethodInfo *)0x0) break;
      if (0 < *(int *)&method_00->return_type) {
        lVar1 = 0x30;
        if (4 < index) {
          lVar1 = 0x38;
        }
        item = Nekki_SF2_GUI_Map_IRaidKeysView__ANMOLCFIIJK
                         ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(NPKKNCCEIND_o *)method_00,
                          *(UnityEngine_GameObject_o **)((long)&__this->klass + lVar1),
                          (MethodInfo *)0x0);
        lVar1 = Method_System_Collections_Generic_List<RaidKey>_Add__;
        if (index < 5) {
          __this_01 = (__this->fields).KFCOGLMHJGN;
        }
        else {
          __this_01 = (__this->fields).GPBMNMEDLKB;
        }
        if (__this_01 == (System_Collections_Generic_List_RaidKey__o *)0x0) break;
        pNVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pNVar3 == (Nekki_SF2_GUI_Map_RaidKey_array *)0x0) break;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pNVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pNVar3->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar2);
          method_00 = extraout_x1_00;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          method_00 = extraout_x1_01;
        }
      }
      __this_00 = (__this->fields).super.ADHBPAAHOKK;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

