// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$.ctor @ RVA 0x302863C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_GameObject__o **ppSVar1;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03128664 with catch @ 0312864c
                       catch() { ... } // from try @ 03128694 with catch @ 0312864c
                       catch() { ... } // from try @ 031286d0 with catch @ 0312864c */
                    /* try { // try from 0312865c to 03228663 has its CatchHandler @ 03128678 */
                    /* try { // try from 03128664 to 0322868f has its CatchHandler @ 0312864c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312865c with catch @ 03128678
                        */
  if ((DAT_04565c9c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
                    /* try { // try from 03128690 to 03228693 has its CatchHandler @ 031286c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 03128694 to 032286c3 has its CatchHandler @ 0312864c */
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565c9c = 1;
    method = extraout_x1;
  }
  (__this->fields).LIIAOOJGEML = -1;
                    /* catch() { ... } // from try @ 03128690 with catch @ 031286c0 */
  __this_00 = (System_Collections_Generic_List_GameObject__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo,method);
                    /* try { // try from 031286c4 to 032286cf has its CatchHandler @ 031286e4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GameObject>__ctor__);
  ppSVar1 = &(__this->fields).KPKPCPFOGAP;
                    /* try { // try from 031286d0 to 032286db has its CatchHandler @ 0312864c */
  *ppSVar1 = __this_00;
                    /* try { // try from 031286dc to 032286e3 has its CatchHandler @ 031286e4 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031286c4 with catch @ 031286e4
                       catch(type#2 @ 00000000) { ... } // from try @ 031286dc with catch @ 031286e4
                        */
  __this_01 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 031286e8 to 0322875b has its CatchHandler @ 031286e8
                       catch() { ... } // from try @ 031286e8 with catch @ 031286e8
                       catch() { ... } // from try @ 03128780 with catch @ 031286e8
                       catch() { ... } // from try @ 03128804 with catch @ 031286e8
                       catch() { ... } // from try @ 0312885c with catch @ 031286e8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).LHCMEFOICKM;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).DIONJIKONHC = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

