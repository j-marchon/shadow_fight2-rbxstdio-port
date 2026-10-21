// OMANDMDCGMF$$JINKFEFKLCA @ RVA 0x329AA30

void OMANDMDCGMF__JINKFEFKLCA
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t LHCPKHGHCMF,
               float GANJLDMKLAE,float AFLKEKAJJEA,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar2;
  IHIFNKAMALG_o *__this;
  IHIFNKAMALG_o *__this_00;
  IHIFNKAMALG_o *__this_01;
  IHIFNKAMALG_o *__this_02;
  float BHOOMCEABGH;
  
  if ((DAT_04567387 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567387 = 1;
  }
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
     pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    __this = (IHIFNKAMALG_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF + -3,
                        Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
    if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
      __this_00 = (IHIFNKAMALG_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF + -2,
                             Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
      pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
        __this_01 = (IHIFNKAMALG_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF + -1,
                               Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        if (((pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
            (__this_02 = (IHIFNKAMALG_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF,
                                    Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
            __this_02 != (IHIFNKAMALG_o *)0x0)) && (__this != (IHIFNKAMALG_o *)0x0)) {
          BHOOMCEABGH = (__this_02->fields).BLEOKMIDGIK.fields.y;
          (__this->fields).BLEOKMIDGIK.fields.x =
               (__this->fields).BLEOKMIDGIK.fields.x + GANJLDMKLAE;
          (__this_02->fields).BLEOKMIDGIK.fields.x =
               (__this_02->fields).BLEOKMIDGIK.fields.x + GANJLDMKLAE;
          if ((__this_00 != (IHIFNKAMALG_o *)0x0) &&
             ((__this_00->fields).BLEOKMIDGIK.fields.x =
                   (__this_00->fields).BLEOKMIDGIK.fields.x + AFLKEKAJJEA,
             __this_01 != (IHIFNKAMALG_o *)0x0)) {
            (__this_01->fields).BLEOKMIDGIK.fields.x =
                 (__this_01->fields).BLEOKMIDGIK.fields.x + AFLKEKAJJEA;
            IHIFNKAMALG__ODKJAGGEMLG(__this,BHOOMCEABGH,(MethodInfo *)0x0);
            IHIFNKAMALG__ODKJAGGEMLG(__this_00,BHOOMCEABGH,(MethodInfo *)0x0);
            IHIFNKAMALG__ODKJAGGEMLG(__this_01,BHOOMCEABGH,(MethodInfo *)0x0);
            IHIFNKAMALG__ODKJAGGEMLG(__this_02,BHOOMCEABGH,(MethodInfo *)0x0);
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this->fields).EFJKPCADGJH.fields.rgba = iVar1;
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this_00->fields).EFJKPCADGJH.fields.rgba = iVar1;
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this_01->fields).EFJKPCADGJH.fields.rgba = iVar1;
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this_02->fields).EFJKPCADGJH.fields.rgba = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

