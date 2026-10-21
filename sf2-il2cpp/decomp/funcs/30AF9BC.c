// CFEANGJDHEE$$LCHLJMJNHJI @ RVA 0x30AF9BC

void CFEANGJDHEE__LCHLJMJNHJI(CFEANGJDHEE_o *__this,System_String_o *EFENHAFFBAG,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if ((DAT_045661d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_045661d5 = 1;
  }
  pSVar2 = (__this->fields).CDDNOMEDBKF;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__Insert
              ((System_Collections_Generic_List_object__o *)pSVar2,0,(Il2CppObject *)EFENHAFFBAG,
               Method_System_Collections_Generic_List<string>_Insert__);
    pSVar2 = (__this->fields).CDDNOMEDBKF;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if (iVar1 < 0x33) {
        return;
      }
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,iVar1 + -1,
                 Method_System_Collections_Generic_List<string>_RemoveAt__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

