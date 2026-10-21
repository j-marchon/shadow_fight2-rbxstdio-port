// Nekki.SF2.GUI.Fight.RewardPanel$$.ctor @ RVA 0x33220AC

void Nekki_SF2_GUI_Fight_RewardPanel___ctor
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RewardPanelItem__o *__this_00;
  System_Collections_Generic_List_RewardPanelItem__o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034220b4 to 03522153 has its CatchHandler @ 034220b4
                       catch() { ... } // from try @ 034220b4 with catch @ 034220b4
                       catch() { ... } // from try @ 03422180 with catch @ 034220b4
                       catch() { ... } // from try @ 034221b0 with catch @ 034220b4
                       catch() { ... } // from try @ 034221d8 with catch @ 034220b4
                       catch() { ... } // from try @ 03422218 with catch @ 034220b4 */
  if ((DAT_0456784c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<RewardPanelItem>_TypeInfo);
    DAT_0456784c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_RewardPanelItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RewardPanelItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RewardPanelItem>__ctor__);
  ppSVar1 = &(__this->fields).MAHKJDKCNPC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
                    /* try { // try from 03422154 to 0352215b has its CatchHandler @ 034221bc */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
  ppSVar2 = &(__this->fields).LHHEINBMMKE;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).OIPNKIIBMFE = -1;
                    /* try { // try from 0342217c to 0352217f has its CatchHandler @ 034221b8 */
                    /* try { // try from 03422180 to 035221a7 has its CatchHandler @ 034220b4 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

