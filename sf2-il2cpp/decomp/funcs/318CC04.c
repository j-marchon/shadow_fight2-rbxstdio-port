// MCCHIAKPFEL$$.ctor @ RVA 0x318CC04

void MCCHIAKPFEL___ctor(MCCHIAKPFEL_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *JLAFGLDIFOC,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       MethodInfo *method)

{
  JHBHHHKEFOO_o *pJVar1;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_00;
  System_Collections_Generic_List_OIBMPFJDKGO__o **ppSVar2;
  MCCHIAKPFEL_Fields *pMVar3;
  
                    /* try { // try from 0328cc14 to 0338cc1b has its CatchHandler @ 0328ccc0 */
                    /* try { // try from 0328cc28 to 0338cc37 has its CatchHandler @ 0328ccb8 */
                    /* try { // try from 0328cc38 to 0338ccaf has its CatchHandler @ 0328cb64 */
  if ((DAT_04566a16 & 1) == 0) {
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo,KGLJICLJHEL,JLAFGLDIFOC,JDIHKNKFJMK,EHEFEIEKHJO);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
    DAT_04566a16 = 1;
  }
  pJVar1 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(pJVar1,(MethodInfo *)0x0);
  pMVar3 = &__this->fields;
  pMVar3->LNONNMPONFN = pJVar1;
  thunk_FUN_01c20e04(pMVar3,pJVar1);
  __this_00 = (System_Collections_Generic_List_OIBMPFJDKGO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
  ppSVar2 = &(__this->fields).PADLGGFCCMI;
                    /* try { // try from 0328ccb0 to 0338ccb3 has its CatchHandler @ 0328ccbc */
                    /* try { // try from 0328ccb4 to 0338ccd7 has its CatchHandler @ 0328cb64 */
  *ppSVar2 = __this_00;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328cc28 with catch @ 0328ccb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328ccb0 with catch @ 0328ccbc
                        */
  thunk_FUN_01c20e04(ppSVar2,__this_00);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328cc14 with catch @ 0328ccc0
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pJVar1 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
                    /* try { // try from 0328ccd8 to 0338ccdb has its CatchHandler @ 0328ccfc */
                    /* try { // try from 0328ccdc to 0338cd03 has its CatchHandler @ 0328cb64 */
  JHBHHHKEFOO___ctor(pJVar1,KGLJICLJHEL,JLAFGLDIFOC,(MethodInfo *)0x0);
  pMVar3->LNONNMPONFN = pJVar1;
                    /* catch() { ... } // from try @ 0328ccd8 with catch @ 0328ccfc */
                    /* try { // try from 0328cd04 to 0338cd0b has its CatchHandler @ 0328cd20 */
  thunk_FUN_01c20e04(pMVar3,pJVar1);
  return;
}

