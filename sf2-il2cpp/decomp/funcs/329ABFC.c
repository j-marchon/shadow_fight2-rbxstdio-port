// OMANDMDCGMF$$GPEPOJMOHKA @ RVA 0x329ABFC

float OMANDMDCGMF__GPEPOJMOHKA
                (UnityEngine_Font_o *ADNMCIPDIJG,System_String_o *CJNHFNHJHPE,int32_t NJBICBHLOMO,
                OMANDMDCGMF_MOHBDJOFHEN_o *LPHIIIFKLND,MethodInfo *method)

{
  bool bVar1;
  int32_t CKCOLJLFJDB;
  int32_t DEDNHOELFOD;
  System_Collections_Generic_List_T__o *CJNHFNHJHPE_00;
  MethodInfo *in_x6;
  int index;
  float fVar2;
  float fVar3;
  
  if ((DAT_0456738a & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    DAT_0456738a = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar1) {
    CJNHFNHJHPE_00 =
         (System_Collections_Generic_List_T__o *)
         PCOEHCPGBBG__CKAJEAKDJOK(CJNHFNHJHPE,10,(MethodInfo *)0x0);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<int>(CJNHFNHJHPE_00,Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    if (bVar1) {
      if (CJNHFNHJHPE != (System_String_o *)0x0) {
        fVar2 = OMANDMDCGMF__GPEPOJMOHKA
                          (ADNMCIPDIJG,0,(CJNHFNHJHPE->fields)._stringLength + -1,CJNHFNHJHPE,
                           NJBICBHLOMO,LPHIIIFKLND,in_x6);
        return fVar2;
      }
    }
    else if (CJNHFNHJHPE_00 != (System_Collections_Generic_List_T__o *)0x0) {
      if ((CJNHFNHJHPE_00->fields)._size < 1) {
        return 0.0;
      }
      index = 0;
      fVar2 = 0.0;
      do {
        if (index == 0) {
          CKCOLJLFJDB = 0;
        }
        else {
          CKCOLJLFJDB = System_Collections_Generic_List<int>__get_Item
                                  ((System_Collections_Generic_List_int__o *)CJNHFNHJHPE_00,
                                   index + -1,Method_System_Collections_Generic_List<int>_get_Item__
                                  );
        }
        DEDNHOELFOD = System_Collections_Generic_List<int>__get_Item
                                ((System_Collections_Generic_List_int__o *)CJNHFNHJHPE_00,index,
                                 Method_System_Collections_Generic_List<int>_get_Item__);
        if (DEDNHOELFOD != CKCOLJLFJDB) {
          fVar3 = OMANDMDCGMF__GPEPOJMOHKA
                            (ADNMCIPDIJG,CKCOLJLFJDB,DEDNHOELFOD,CJNHFNHJHPE,NJBICBHLOMO,LPHIIIFKLND
                             ,in_x6);
          if (fVar3 < 0.0) {
            return -1.0;
          }
          if (fVar2 <= fVar3) {
            fVar2 = fVar3;
          }
        }
        index = index + 1;
      } while (index < (CJNHFNHJHPE_00->fields)._size);
      return fVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}

