// FMOACLJMJKF$$JGPKFEOBBCP @ RVA 0x3087D1C

void FMOACLJMJKF__JGPKFEOBBCP
               (System_Collections_Generic_List_string__o *PHOLAJOMLEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *a;
  System_String_o *b;
  int iVar3;
  int index;
  int32_t index_00;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHOLAJOMLEL;
  if ((DAT_0456602c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_0456602c = 1;
  }
  if (PHOLAJOMLEL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  iVar3 = (PHOLAJOMLEL->fields)._size;
  if (0 < iVar3) {
    index = 0;
    do {
      iVar1 = index + 1;
      index_00 = iVar1;
      if (iVar1 < iVar3) {
        do {
          a = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                         Method_System_Collections_Generic_List<string>_get_Item__);
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                         Method_System_Collections_Generic_List<string>_get_Item__);
          bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
          if (bVar2) {
            System_Collections_Generic_List<object>__RemoveAt
                      ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                       Method_System_Collections_Generic_List<string>_RemoveAt__);
            index_00 = index_00 + -1;
          }
          iVar3 = (PHOLAJOMLEL->fields)._size;
          index_00 = index_00 + 1;
        } while (index_00 < iVar3);
      }
      index = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}

