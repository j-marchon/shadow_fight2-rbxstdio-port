// MGNPHCAAEIO.HLAKGGFFNAO$$.ctor @ RVA 0x33FDC90

void MGNPHCAAEIO_HLAKGGFFNAO___ctor(MGNPHCAAEIO_HLAKGGFFNAO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568072 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HBNENINHPGF>_TypeInfo);
    DAT_04568072 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_HBNENINHPGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HBNENINHPGF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HBNENINHPGF>__ctor__);
  (__this->fields).DIELINNGEBJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

