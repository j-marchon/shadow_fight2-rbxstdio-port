// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$NMAOIPMGDIG @ RVA 0x32C7F7C

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__NMAOIPMGDIG
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  PLIIGOCLJDL_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_Events_UnityEvent_o *__this_02;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  
                    /* try { // try from 033c7f8c to 034c7f8f has its CatchHandler @ 033c8144 */
  if ((DAT_045674fd & 1) == 0) {
                    /* try { // try from 033c7fa4 to 034c7fab has its CatchHandler @ 033c8258 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033c7fac to 034c7fc7 has its CatchHandler @ 033c79c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_JJMDGMDDDAA__);
                    /* try { // try from 033c7fc8 to 034c7fdf has its CatchHandler @ 033c82dc */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14092);
    DAT_045674fd = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033c7ff0 to 034c7ff3 has its CatchHandler @ 033c8298 */
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* try { // try from 033c7ff4 to 034c8007 has its CatchHandler @ 033c82c8 */
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if ((__this_00 != (PLIIGOCLJDL_o *)0x0) &&
     (__this_01 = PLIIGOCLJDL__FKNGMLAKOOC(__this_00,(__this->fields).MLAAJICBOAD,(MethodInfo *)0x0)
     , __this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
                    /* try { // try from 033c8010 to 034c8033 has its CatchHandler @ 033c82c4 */
    pNVar2 = (__this->fields)._ratingBtn;
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,0,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (pNVar2,StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 033c8050 to 034c8053 has its CatchHandler @ 033c8294 */
      pNVar2 = (__this->fields)._ratingBtn;
                    /* try { // try from 033c8054 to 034c807b has its CatchHandler @ 033c82c0 */
      pSVar1 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,1,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                  (pNVar2,StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._ratingBtn;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 033c8084 to 034c808f has its CatchHandler @ 033c8290 */
          __this_02 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 033c809c to 034c80c7 has its CatchHandler @ 033c82bc */
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 033c80c8 to 034c80ef has its CatchHandler @ 033c82b8 */
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

