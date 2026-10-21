// KPBOJBLLKPJ$$CELMCMFOEAO @ RVA 0x308903C

void KPBOJBLLKPJ__CELMCMFOEAO(KPBOJBLLKPJ_o *__this,ODKDFMHHLIP_o *NONPLOOOOAG,MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  int32_t index;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_0456603a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_RemoveAt__);
    DAT_0456603a = 1;
  }
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    ACCIHBHMFPN = (NONPLOOOOAG->fields).MOIGDPBNMNI;
    __this_00 = KPBOJBLLKPJ__NBKAMBPCHNJ(__this,ACCIHBHMFPN,method);
    if (__this_00 == (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    index = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)NONPLOOOOAG,
                       Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    if (-1 < index) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_00,index,
                 Method_System_Collections_Generic_List<ODKDFMHHLIP>_RemoveAt__);
      KPBOJBLLKPJ__HDJJADNLHKG(__this,ACCIHBHMFPN,index,in_x3);
      return;
    }
  }
  return;
}

