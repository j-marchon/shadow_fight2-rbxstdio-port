// PBHDPJBLDLG$$NEMMCPJICCF @ RVA 0x348F864

void PBHDPJBLDLG__NEMMCPJICCF(PBHDPJBLDLG_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  System_Collections_Generic_List_KeyValuePair_int__object___o *pSVar3;
  System_Collections_Generic_List_int__o *__this_02;
  System_Collections_Generic_KeyValuePair_int__object__o SVar4;
  System_Collections_Generic_KeyValuePair_int__object__o SVar5;
  
  if ((DAT_0456840b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Item__)
    ;
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo);
    FUN_01bab630(&StringLiteral_13879);
    DAT_0456840b = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (__this_00,false,StringLiteral_13879,(MethodInfo *)0x0),
     __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *)0x0)) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo)) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,true,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
               (__this->fields).DGGLBIIIEBM;
      if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
        SVar4 = System_Collections_Generic_List<KeyValuePair<int,_object>>__get_Item
                          (pSVar3,JDEFJPHCNMM,
                           Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Item__
                          );
        pSVar3 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
                 (__this->fields).DGGLBIIIEBM;
        if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
          SVar5 = System_Collections_Generic_List<KeyValuePair<int,_object>>__get_Item
                            (pSVar3,JDEFJPHCNMM,
                             Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Item__
                            );
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ReInit
                    (__this_01,SVar5.fields.key,(CBPENMDOJDB_o *)SVar4.fields.value,
                     (MethodInfo *)0x0);
          __this_02 = (__this->fields).JDHINHCBLNC;
          if (__this_02 != (System_Collections_Generic_List_int__o *)0x0) {
            bVar2 = System_Collections_Generic_List<int>__Contains
                              (__this_02,JDEFJPHCNMM,
                               Method_System_Collections_Generic_List<int>_Contains__);
            if (bVar2) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ShowTopGroupSeparator
                        (__this_01,(MethodInfo *)0x0);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

