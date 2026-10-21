// Nekki.SF2.GUI.Profile.UserPerksPanel$$.ctor @ RVA 0x34A8090

void Nekki_SF2_GUI_Profile_UserPerksPanel___ctor
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  System_Collections_Generic_List_EANNACPOJFA__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568503 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
    DAT_04568503 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035a80dc to 036a80e7 has its CatchHandler @ 035a7464 */
  __this_00 = (System_Collections_Generic_List_EANNACPOJFA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EANNACPOJFA>_TypeInfo,method);
                    /* try { // try from 035a80e8 to 036a80ef has its CatchHandler @ 035a80f0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
  ppSVar1 = &(__this->fields).MHOLLBLFLAH;
                    /* catch() { ... } // from try @ 035a7ef0 with catch @ 035a80f0
                       catch() { ... } // from try @ 035a7fb4 with catch @ 035a80f0
                       catch() { ... } // from try @ 035a806c with catch @ 035a80f0
                       catch() { ... } // from try @ 035a80e8 with catch @ 035a80f0 */
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

