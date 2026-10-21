// IPPEHAJADOO$$OAKJPPFCMAD @ RVA 0x3140DF4

void IPPEHAJADOO__OAKJPPFCMAD
               (IPPEHAJADOO_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *BEBLJNABOEH,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_T__o *CJNHFNHJHPE;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD;
  MethodInfo *in_x4;
  int index;
  
  if ((DAT_04566767 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<IPPEHAJADOO_JEOCIECEGHH>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566767 = 1;
  }
  if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    if (0 < (DDOAJGPFCNB->fields)._size) {
      index = 0;
      do {
        if (BEBLJNABOEH == (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)0x0)
        goto LAB_03240f1c;
        if (index < (BEBLJNABOEH->fields)._size) {
          CJNHFNHJHPE = (System_Collections_Generic_List_T__o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,index,
                                   Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__
                                  );
          bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                            (CJNHFNHJHPE,Method_DJNBJHPDKDP_OBECCOPBADO<IPPEHAJADOO_JEOCIECEGHH>__);
          if (!bVar1) {
            BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)DDOAJGPFCNB,index,
                                     Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__)
            ;
            ELAGKBMJCOD = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,index,
                                     Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__
                                    );
            IPPEHAJADOO__CBGCMJCJJKP(__this,BCKBBGCOMJD,ELAGKBMJCOD,false,in_x4);
          }
        }
        index = index + 1;
      } while (index < (DDOAJGPFCNB->fields)._size);
    }
    return;
  }
LAB_03240f1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

