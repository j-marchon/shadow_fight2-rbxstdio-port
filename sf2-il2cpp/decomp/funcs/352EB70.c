// Nekki.SF2.GUI.Fight.RoundsPanel$$.ctor @ RVA 0x352EB70

void Nekki_SF2_GUI_Fight_RoundsPanel___ctor
               (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a46 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    FUN_01bab630(&StringLiteral_6368);
    FUN_01bab630(&StringLiteral_6367);
                    /* try { // try from 0362ebe0 to 0372ebe7 has its CatchHandler @ 0362ec44 */
    DAT_04568a46 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0362ebe8 to 0372ec37 has its CatchHandler @ 0362eb44 */
  __this_00 = (System_Collections_Generic_List_ResolutionImage__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
  ppSVar1 = &(__this->fields).BPPCPHCDICD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields)._storyRoundDone = StringLiteral_6367;
  thunk_FUN_01c20e04();
  (__this->fields)._pvpRoundDone = StringLiteral_6367;
  thunk_FUN_01c20e04();
  (__this->fields)._roundUndone = StringLiteral_6368;
                    /* try { // try from 0362ec38 to 0372ec3b has its CatchHandler @ 0362ec40 */
  thunk_FUN_01c20e04();
                    /* try { // try from 0362ec3c to 0372ec5b has its CatchHandler @ 0362eb44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362ec38 with catch @ 0362ec40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362ebe0 with catch @ 0362ec44
                        */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

