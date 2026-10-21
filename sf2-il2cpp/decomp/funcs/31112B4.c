// Nekki.SF2.Core.Fights.Renders.Model.ModelCapsuleRendererHolder$$AddCapsuleRender @ RVA 0x31112B4

void Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__AddCapsuleRender
               (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *__this,
               Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *IAKCIALILLN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_CapsuleRender__o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_array *pNVar3;
  
  if ((DAT_04566583 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CapsuleRender>_Add__);
    DAT_04566583 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<CapsuleRender>_Add__;
  __this_00 = (__this->fields).NAAEHBPHOMJ;
  if (__this_00 != (System_Collections_Generic_List_CapsuleRender__o *)0x0) {
    pNVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = IAKCIALILLN;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,IAKCIALILLN);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IAKCIALILLN,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

