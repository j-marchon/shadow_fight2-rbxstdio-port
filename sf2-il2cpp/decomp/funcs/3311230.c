// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$.ctor @ RVA 0x3311230

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
    DAT_045677b0 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>__ctor__);
  ppSVar1 = &(__this->fields).FHPLGHNOJGE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).PPEHDGLMLNK = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

