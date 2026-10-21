// BackKeyManager$$RemoveBackKeyController @ RVA 0x31AC11C

void BackKeyManager__RemoveBackKeyController
               (BackKeyManager_o *__this,HAFLPBGEGCI_o *ELHFHAPBFMI,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04566b49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_Remove__);
    DAT_04566b49 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).EEFJHDPNBNG;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              (__this_00,(Il2CppObject *)ELHFHAPBFMI,
               Method_System_Collections_Generic_List<HAFLPBGEGCI>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

