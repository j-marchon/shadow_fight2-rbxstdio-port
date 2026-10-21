// FCJBEKHDLAF$$MAGLOOLDJHG @ RVA 0x33E951C

void FCJBEKHDLAF__MAGLOOLDJHG
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value;
  MMDDDDFHOLG_o *pMVar2;
  
  if ((DAT_04567eda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    DAT_04567eda = 1;
  }
  if (BCHKAEBGKGG != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    value = (BCHKAEBGKGG->fields).KOANCCDDBDA;
    if (value != (Il2CppObject *)0x0) {
      bVar1 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
      if (((value->klass->_2).naturalAligment < bVar1) ||
         ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)ECENNHNBAME_TypeInfo)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(value);
      }
    }
    pMVar2 = (__this->fields).POEGCOJFMDB;
    if ((pMVar2 != (MMDDDDFHOLG_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pMVar2->fields).KECADJKAJNG,
       __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (__this_00,StringLiteral_2968,value,
                 Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
      pMVar2 = (__this->fields).POEGCOJFMDB;
      if (pMVar2 != (MMDDDDFHOLG_o *)0x0) {
        MMDDDDFHOLG__CFEOMJALMBB
                  (pMVar2,(BCHKAEBGKGG->fields).HEMGHNOOJPI,0xb,true,(NJPBBPOABKP_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

