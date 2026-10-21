// NOAPKJBLPND$$KKKBEBDBBEJ @ RVA 0x3521F70

void NOAPKJBLPND__KKKBEBDBBEJ(NOAPKJBLPND_o *__this,DEFIPIDEFOO_o *OAOLCGAIILM,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if ((DAT_045689d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_set_Item__);
    DAT_045689d1 = 1;
  }
  if ((OAOLCGAIILM != (DEFIPIDEFOO_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (__this->fields).MAKFKJPLHCF,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int,_object>__set_Item
              (__this_00,(OAOLCGAIILM->fields).IGLHCNLNIPK,(Il2CppObject *)OAOLCGAIILM,
               Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

