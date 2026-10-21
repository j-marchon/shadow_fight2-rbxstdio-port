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

