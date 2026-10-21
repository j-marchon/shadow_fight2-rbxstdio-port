// TypeDefIndex 173
// Namespace: Nekki.SF2.Core.Fights.Renders.Model
// public class ModelCapsuleRendererHolder : MonoBehaviour
// Fields:
//   private List<CapsuleRender> NAAEHBPHOMJ; // 0x20

// ===== public void AddCapsuleRender(CapsuleRender IAKCIALILLN)  [RVA 0x31112B4]
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


// ===== public void ChangeColor(Color BCPMKLLLFDL)  [RVA 0x3111360]
// Nekki.SF2.Core.Fights.Renders.Model.ModelCapsuleRendererHolder$$ChangeColor @ RVA 0x3111360

void Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__ChangeColor
               (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *__this,
               UnityEngine_Color_o BCPMKLLLFDL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_CapsuleRender__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04566584 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CapsuleRender>_GetEnumerator__);
    DAT_04566584 = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NAAEHBPHOMJ;
  if (__this_00 != (System_Collections_Generic_List_CapsuleRender__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<CapsuleRender>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_Dispose__);
        return;
      }
      if ((Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)local_58.fields._current ==
          (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)0x0) break;
      Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__set_Color
                ((Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)local_58.fields._current,
                 BCPMKLLLFDL,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x31114DC]
// Nekki.SF2.Core.Fights.Renders.Model.ModelCapsuleRendererHolder$$.ctor @ RVA 0x31114DC

void Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder___ctor
               (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_CapsuleRender__o *__this_00;
  System_Collections_Generic_List_CapsuleRender__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566585 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CapsuleRender>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CapsuleRender>_TypeInfo);
    DAT_04566585 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_CapsuleRender__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CapsuleRender>_TypeInfo,method);
                    /* try { // try from 03211534 to 03311613 has its CatchHandler @ 03211534
                       catch() { ... } // from try @ 03211534 with catch @ 03211534
                       catch() { ... } // from try @ 03211640 with catch @ 03211534
                       catch() { ... } // from try @ 0321169c with catch @ 03211534
                       catch() { ... } // from try @ 032116c8 with catch @ 03211534
                       catch() { ... } // from try @ 03211708 with catch @ 03211534 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<CapsuleRender>__ctor__);
  ppSVar1 = &(__this->fields).NAAEHBPHOMJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

